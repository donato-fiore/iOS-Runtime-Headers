// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MTLSTITCHEDLIBRARYDESCRIPTOR_H
#define MTLSTITCHEDLIBRARYDESCRIPTOR_H

@class NSArray;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface MTLStitchedLibraryDescriptor : NSObject <NSCopying>



@property (copy, nonatomic) NSArray *binaryArchives; // ivar: _binaryArchives
@property (copy, nonatomic) NSArray *functionGraphs; // ivar: _functionGraphs
@property (copy, nonatomic) NSArray *functions; // ivar: _functions
@property (nonatomic) NSUInteger options; // ivar: _options


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)formattedDescription:(NSUInteger)arg0 ;
-(id)init;
-(void)dealloc;


@end


#endif
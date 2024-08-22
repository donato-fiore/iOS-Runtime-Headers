// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MTLBINARYARCHIVEDESCRIPTOR_H
#define MTLBINARYARCHIVEDESCRIPTOR_H

@class NSURL;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface MTLBinaryArchiveDescriptor : NSObject <NSCopying>



@property (nonatomic) NSUInteger options; // ivar: _options
@property (copy, nonatomic) NSURL *url; // ivar: _url
@property (nonatomic) NSUInteger writingOptions;


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(void)dealloc;


@end


#endif
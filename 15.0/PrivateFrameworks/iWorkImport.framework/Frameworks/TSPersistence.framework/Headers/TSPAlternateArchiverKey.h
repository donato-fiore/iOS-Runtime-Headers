// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSPALTERNATEARCHIVERKEY_H
#define TSPALTERNATEARCHIVERKEY_H

@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface TSPAlternateArchiverKey : NSObject <NSCopying>



@property (readonly, nonatomic) *void fieldPath; // ivar: _fieldPath
@property (readonly, nonatomic) NSUInteger version; // ivar: _version


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithVersion:(NSUInteger)arg0 fieldPath:(*void)arg1 ;
-(void)dealloc;


@end


#endif
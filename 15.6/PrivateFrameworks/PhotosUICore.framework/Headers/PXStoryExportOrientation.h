// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXSTORYEXPORTORIENTATION_H
#define PXSTORYEXPORTORIENTATION_H

@class NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface PXStoryExportOrientation : NSObject <NSCopying>



@property (readonly, nonatomic) NSString *localizedTitle;
@property (readonly, nonatomic) NSInteger type; // ivar: _type


+(id)pickableOrientations;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithOrientationType:(NSInteger)arg0 ;
-(id)initWithUserInterfaceOrientation:(NSInteger)arg0 ;


@end


#endif
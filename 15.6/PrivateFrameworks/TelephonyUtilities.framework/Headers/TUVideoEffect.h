// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TUVIDEOEFFECT_H
#define TUVIDEOEFFECT_H

@class NSString, UIImage;

#import <Foundation/Foundation.h>


@interface TUVideoEffect : NSObject

@property (readonly, copy, nonatomic) NSString *name; // ivar: _name
@property (readonly, copy, nonatomic) UIImage *thumbnailImage; // ivar: _thumbnailImage


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToEffect:(id)arg0 ;
-(NSUInteger)hash;
-(id)init;
-(id)initWithName:(id)arg0 thumbnailImage:(id)arg1 ;


@end


#endif
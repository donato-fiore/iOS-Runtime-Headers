// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICSYSTEMPAPERIMAGEGENERATOR_H
#define ICSYSTEMPAPERIMAGEGENERATOR_H


#import <Foundation/Foundation.h>


@interface ICSystemPaperImageGenerator : NSObject

@property (readonly, nonatomic) BOOL hasDeepLink;
@property (readonly, nonatomic) CGRect paperContentBounds;
@property (nonatomic, getter=isSixChannelBlendingEnabled) BOOL sixChannelBlendingEnabled; // ivar: _sixChannelBlendingEnabled


+(id)imageGeneratorWithPaperAttachment:(id)arg0 ;
+(id)imageGeneratorWithPaperAttachment:(id)arg0 useActivePaper:(BOOL)arg1 ;
-(BOOL)drawPaperInRect:(struct CGRect )arg0 ;
-(BOOL)validatePaperBounds:(struct CGRect )arg0 ;
-(id)imageWithFullResolution:(BOOL)arg0 inverted:(BOOL)arg1 ;
-(id)init;
-(id)initWithPaperAttachment:(id)arg0 ;
-(id)initWithPaperAttachment:(id)arg0 useActivePaper:(BOOL)arg1 ;
-(void)imageWithBounds:(struct CGRect )arg0 completion:(id)arg1 ;


@end


#endif
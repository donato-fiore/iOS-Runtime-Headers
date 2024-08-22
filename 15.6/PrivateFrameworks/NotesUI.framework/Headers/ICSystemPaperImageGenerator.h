// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ICSYSTEMPAPERIMAGEGENERATOR_H
#define ICSYSTEMPAPERIMAGEGENERATOR_H


#import <Foundation/Foundation.h>


@interface ICSystemPaperImageGenerator : NSObject

@property (readonly, nonatomic) BOOL hasDeepLink;
@property (readonly, nonatomic) CGRect paperContentBounds;


+(id)imageGeneratorWithPaperAttachment:(id)arg0 ;
-(id)imageWithFullResolution:(BOOL)arg0 inverted:(BOOL)arg1 ;
-(id)initWithPaperAttachment:(id)arg0 ;
-(void)imageWithBounds:(struct CGRect )arg0 completion:(id)arg1 ;


@end


#endif
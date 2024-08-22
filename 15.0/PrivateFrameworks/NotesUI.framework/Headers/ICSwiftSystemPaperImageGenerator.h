// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ICSWIFTSYSTEMPAPERIMAGEGENERATOR_H
#define ICSWIFTSYSTEMPAPERIMAGEGENERATOR_H



#import "ICSystemPaperImageGenerator.h"

@interface ICSwiftSystemPaperImageGenerator : ICSystemPaperImageGenerator {
    ? document;
}


@property (nonatomic, readonly) BOOL hasDeepLink;
@property (nonatomic, readonly) CGRect paperContentBounds;


-(id)imageWithFullResolution:(BOOL)arg0 inverted:(BOOL)arg1 ;
-(id)init;
-(id)initWithPaperAttachment:(id)arg0 ;
-(void)imageWithBounds:(struct CGRect )arg0 completion:(id)arg1 ;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _VUIMONOGRAMINITIALSSILHOUETTEIMAGEGENERATOR_H
#define _VUIMONOGRAMINITIALSSILHOUETTEIMAGEGENERATOR_H

@class VUIMonogramImageGenerator;



@interface _VUIMonogramInitialsSilhouetteImageGenerator : VUIMonogramImageGenerator



+(id)_initialsForFirstName:(id)arg0 lastName:(id)arg1 ;
+(id)monogramImageWithDescription:(id)arg0 ;
+(void)drawInitialsWithRect:(struct CGRect )arg0 andDescription:(id)arg1 ;
-(id)imageKeyForObject:(id)arg0 ;
-(id)loadImageForObject:(id)arg0 scaleToSize:(struct CGSize )arg1 cropToFit:(BOOL)arg2 imageDirection:(NSInteger)arg3 requestLoader:(id)arg4 completionHandler:(id)arg5 ;
-(void)cancelLoad:(id)arg0 ;


@end


#endif
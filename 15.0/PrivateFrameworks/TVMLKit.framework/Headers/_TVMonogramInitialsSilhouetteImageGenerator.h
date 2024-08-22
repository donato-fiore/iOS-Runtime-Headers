// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TVMONOGRAMINITIALSSILHOUETTEIMAGEGENERATOR_H
#define _TVMONOGRAMINITIALSSILHOUETTEIMAGEGENERATOR_H

@class TVMonogramImageGenerator;



@interface _TVMonogramInitialsSilhouetteImageGenerator : TVMonogramImageGenerator



+(BOOL)_isRomanName:(id)arg0 ;
+(id)_initialsForFirstName:(id)arg0 lastName:(id)arg1 ;
+(id)monogramImageWithDescription:(id)arg0 ;
-(id)imageKeyForObject:(id)arg0 ;
-(id)loadImageForObject:(id)arg0 scaleToSize:(struct CGSize )arg1 cropToFit:(BOOL)arg2 imageDirection:(NSInteger)arg3 requestLoader:(id)arg4 completionHandler:(id)arg5 ;
-(void)cancelLoad:(id)arg0 ;


@end


#endif
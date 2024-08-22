// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TVMONOGRAMAPPLEACCOUNTIMAGEGENERATOR_H
#define _TVMONOGRAMAPPLEACCOUNTIMAGEGENERATOR_H

@class TVMonogramImageGenerator;



@interface _TVMonogramAppleAccountImageGenerator : TVMonogramImageGenerator



+(BOOL)isAppleAccountsURL:(id)arg0 ;
-(id)loadImageForURL:(id)arg0 scaleToSize:(struct CGSize )arg1 cropToFit:(BOOL)arg2 imageDirection:(NSInteger)arg3 requestLoader:(id)arg4 completionHandler:(id)arg5 ;
-(void)cancelLoad:(id)arg0 ;


@end


#endif
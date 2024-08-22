// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC8NEWSFEED30TAGIMAGESHAREATTRIBUTEPROVIDER_H
#define _TTC8NEWSFEED30TAGIMAGESHAREATTRIBUTEPROVIDER_H

@protocol NETagImageShareAttributeProviderType;

#import <Foundation/Foundation.h>


@interface _TtC8NewsFeed30TagImageShareAttributeProvider : NSObject <NETagImageShareAttributeProviderType>

 {
    ? appConfigurationManager;
}




-(id)getShareTagImageFor:(id)arg0 ;
-(id)init;
-(void)createShareSportsEventImageFor:(id)arg0 size:(struct CGSize )arg1 logoWidth:(CGFloat)arg2 completion:(id)arg3 ;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PMTITLEEDITORPROVIDER_H
#define PMTITLEEDITORPROVIDER_H

@class NSString;
@protocol PMEditProviderProtocol, PMEditProviderDelegate;

#import <Foundation/Foundation.h>

#import "VEKProduction.h"

@interface PMTitleEditorProvider : NSObject <PMEditProviderProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PMEditProviderDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) VEKProduction *production; // ivar: _production
@property (readonly, nonatomic) NSString *subTitle;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *title;


-(id)defaultMemoriesTitleHelper;
-(id)initWithProduction:(id)arg0 ;
-(void)updateSubtitle:(id)arg0 ;
-(void)updateTitle:(id)arg0 ;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PMMOVIEPROVIDER_H
#define PMMOVIEPROVIDER_H

@protocol PMMovieProviderDelegate;

#import <Foundation/Foundation.h>

#import "PMMovieProviderAnalyticsEvent.h"
#import "VEKProduction.h"
#import "VEKResult.h"

@interface PMMovieProvider : NSObject

@property (retain, nonatomic) PMMovieProviderAnalyticsEvent *analyticsEvent; // ivar: _analyticsEvent
@property (nonatomic) NSUInteger currentEditID; // ivar: _currentEditID
@property (nonatomic) BOOL isEditing; // ivar: _isEditing
@property (retain, nonatomic) VEKProduction *lastEditingProduction; // ivar: _lastEditingProduction
@property (retain, nonatomic) VEKResult *lastResult; // ivar: _lastResult
@property (retain, nonatomic) VEKProduction *production; // ivar: _production
@property (weak, nonatomic) NSObject<PMMovieProviderDelegate> *providerDelegate; // ivar: _providerDelegate


+(NSUInteger)movieClipCountWithProduction:(id)arg0 result:(id)arg1 ;
-(id)initWithProduction:(id)arg0 ;
-(void)cancelEdit;
-(void)refreshPlayerItem;


@end


#endif
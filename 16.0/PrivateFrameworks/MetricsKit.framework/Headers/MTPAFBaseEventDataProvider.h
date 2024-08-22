// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MTPAFBASEEVENTDATAPROVIDER_H
#define MTPAFBASEEVENTDATAPROVIDER_H

@protocol MTPAFBaseEventDataProviderDelegate;


#import "MTBaseEventDataProvider.h"

@interface MTPAFBaseEventDataProvider : MTBaseEventDataProvider

@property (weak, nonatomic) NSObject<MTPAFBaseEventDataProviderDelegate> *delegate;


-(id)isOffline:(id)arg0 ;
-(id)knownFields;
-(id)osLanguages:(id)arg0 ;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NSSEXTERNALANALYTICSPANELDENTIFIERPROVIDER_H
#define NSSEXTERNALANALYTICSPANELDENTIFIERPROVIDER_H

@class NSArray, NSString;

#import <Foundation/Foundation.h>


@interface NSSExternalAnalyticsPaneldentifierProvider : NSObject

@property (readonly, copy, nonatomic) NSArray *hostNames; // ivar: _hostNames
@property (readonly, nonatomic) NSString *panelIdentifier; // ivar: _panelIdentifier


-(id)initWithHostNames:(id)arg0 ;
-(id)panelIdentifierWithHostNames:(id)arg0 ;


@end


#endif
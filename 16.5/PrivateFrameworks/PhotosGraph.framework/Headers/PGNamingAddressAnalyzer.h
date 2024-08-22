// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PGNAMINGADDRESSANALYZER_H
#define PGNAMINGADDRESSANALYZER_H

@class NSString;
@protocol PGNamingAnalyzer;

#import <Foundation/Foundation.h>

#import "PGGraphNamingProcessor.h"

@interface PGNamingAddressAnalyzer : NSObject <PGNamingAnalyzer>

 {
    PGGraphNamingProcessor *_processor;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithNamingProcessor:(id)arg0 ;
-(id)name;
-(void)findAddressMatchesFromHomeAddressesByContactIdentifier:(id)arg0 momentNodesByAddressNode:(id)arg1 withProgressBlock:(id)arg2 ;
-(void)runAnalysisWithProgressBlock:(id)arg0 ;


@end


#endif
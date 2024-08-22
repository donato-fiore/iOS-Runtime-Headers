// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PGGRAPHINGESTMESSAGEPROCESSOR_H
#define PGGRAPHINGESTMESSAGEPROCESSOR_H

@class NSSet, NSString, NSDictionary;
@protocol PGGraphIngestProcessor;

#import <Foundation/Foundation.h>

#import "PGGraphBuilder.h"
#import "PGMessageProfile.h"

@interface PGGraphIngestMessageProcessor : NSObject <PGGraphIngestProcessor>

 {
    PGGraphBuilder *_graphBuilder;
}


@property (readonly, nonatomic) NSSet *contactIdentifiers; // ivar: _contactIdentifiers
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSSet *loveEmojis; // ivar: _loveEmojis
@property (retain, nonatomic) PGMessageProfile *messageProfile; // ivar: _messageProfile
@property (retain, nonatomic) NSDictionary *personLocalIdentifierByCNIdentifier; // ivar: _personLocalIdentifierByCNIdentifier
@property (readonly, nonatomic) NSSet *personNodes; // ivar: _personNodes
@property (readonly) Class superclass;


-(BOOL)_isInterestingGroupChatWithPersons:(id)arg0 ;
-(BOOL)shouldRunWithGraphUpdate:(id)arg0 ;
-(NSUInteger)numberOfEmojis:(id)arg0 inText:(id)arg1 ;
-(id)addressComponentFromText:(id)arg0 usingDataDetector:(id)arg1 ;
-(void)runWithGraphUpdate:(id)arg0 progressBlock:(id)arg1 ;
-(void)setGraphBuilder:(id)arg0 ;


@end


#endif
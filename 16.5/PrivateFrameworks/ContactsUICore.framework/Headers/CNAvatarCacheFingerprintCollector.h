// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CNAVATARCACHEFINGERPRINTCOLLECTOR_H
#define CNAVATARCACHEFINGERPRINTCOLLECTOR_H

@class NSMutableOrderedSet, NSString, NSArray;
@protocol CNChangeHistoryEventVisitor;

#import <Foundation/Foundation.h>


@interface CNAvatarCacheFingerprintCollector : NSObject <CNChangeHistoryEventVisitor>

 {
    NSMutableOrderedSet *_fingerprints;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSArray *fingerprintsOfAffectedContacts;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)init;
-(void)visitAddContactEvent:(id)arg0 ;
-(void)visitDeleteContactEvent:(id)arg0 ;
-(void)visitDropEverythingEvent:(id)arg0 ;
-(void)visitUpdateContactEvent:(id)arg0 ;


@end


#endif
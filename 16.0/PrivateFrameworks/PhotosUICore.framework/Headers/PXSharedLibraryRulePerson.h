// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXSHAREDLIBRARYRULEPERSON_H
#define PXSHAREDLIBRARYRULEPERSON_H

@class PHPerson, NSString;
@protocol PXSharedLibraryParticipant;

#import <Foundation/Foundation.h>


@interface PXSharedLibraryRulePerson : NSObject {
    PHPerson *_person;
}


@property (readonly, nonatomic) NSString *displayName;
@property (readonly, nonatomic) NSObject<PXSharedLibraryParticipant> *participant; // ivar: _participant
@property (readonly, nonatomic) PHPerson *person;


+(id)rulePersonWithParticipant:(id)arg0 ;
+(id)rulePersonWithPerson:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(void)fetchStatusWithCompletion:(id)arg0 ;


@end


#endif
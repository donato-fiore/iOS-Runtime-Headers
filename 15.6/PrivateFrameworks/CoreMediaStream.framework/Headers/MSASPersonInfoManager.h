// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MSASPERSONINFOMANAGER_H
#define MSASPERSONINFOMANAGER_H

@class NSString, NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface MSASPersonInfoManager : NSObject

@property (retain, nonatomic) NSString *pathForPersonInfoDictionary; // ivar: _pathForPersonInfoDictionary
@property (retain, nonatomic) NSMutableDictionary *personIDToPersonInfoDictionary; // ivar: _personIDToPersonInfoDictionary


+(id)allocWithZone:(struct _NSZone *)arg0 ;
+(id)sharedManager;
-(BOOL)updateWithSharingRelationship:(id)arg0 ;
-(id)emailForPersonID:(id)arg0 ;
-(id)firstNameForPersonID:(id)arg0 ;
-(id)fullNameForPersonID:(id)arg0 ;
-(id)lastNameForPersonID:(id)arg0 ;
-(void)initWithPath:(id)arg0 ;


@end


#endif
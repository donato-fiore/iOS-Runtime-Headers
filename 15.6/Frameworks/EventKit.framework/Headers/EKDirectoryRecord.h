// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef EKDIRECTORYRECORD_H
#define EKDIRECTORYRECORD_H

@class NSString, NSDictionary;

#import <Foundation/Foundation.h>


@interface EKDirectoryRecord : NSObject

@property (retain, nonatomic) NSString *displayName; // ivar: _displayName
@property (retain, nonatomic) NSString *firstName; // ivar: _firstName
@property (retain, nonatomic) NSString *lastName; // ivar: _lastName
@property (retain, nonatomic) NSString *preferredAddress; // ivar: _preferredAddress
@property (copy, nonatomic) NSString *principalPath; // ivar: _principalPath
@property (readonly) NSDictionary *userInfo;


+(id)recordFromSearchResult:(id)arg0 ;
-(id)description;


@end


#endif
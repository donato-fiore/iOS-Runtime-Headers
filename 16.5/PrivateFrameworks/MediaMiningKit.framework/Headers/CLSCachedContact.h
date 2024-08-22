// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CLSCACHEDCONTACT_H
#define CLSCACHEDCONTACT_H

@class NSString;

#import <Foundation/Foundation.h>


@interface CLSCachedContact : NSObject

@property (retain, nonatomic) NSString *classifiedPersonLocalIdentifierWithFaceModelID; // ivar: _classifiedPersonLocalIdentifierWithFaceModelID
@property (retain, nonatomic) NSString *contactIdentifier; // ivar: _contactIdentifier
@property (nonatomic) BOOL hasPicture; // ivar: _hasPicture
@property (nonatomic) CGFloat updateTimestamp; // ivar: _updateTimestamp


-(id)description;
-(id)init;


@end


#endif
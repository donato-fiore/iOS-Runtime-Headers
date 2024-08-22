// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FMINTERNALKEYCHAINITEM_H
#define FMINTERNALKEYCHAINITEM_H

@class NSDate, NSString, NSData;
@protocol FMKeychainItem;

#import <Foundation/Foundation.h>


@interface FMInternalKeychainItem : NSObject <FMKeychainItem>



@property (retain, nonatomic) NSDate *creationDate; // ivar: _creationDate
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSDate *lastModifyDate; // ivar: _lastModifyDate
@property (retain, nonatomic) NSString *password; // ivar: _password
@property (retain, nonatomic) NSData *rawData; // ivar: _rawData
@property (readonly) Class superclass;


-(id)initWithResults:(id)arg0 ;


@end


#endif
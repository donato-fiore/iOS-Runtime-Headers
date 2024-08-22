// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WBSPERSITEPREFERENCEVALUEINFORMATION_H
#define WBSPERSITEPREFERENCEVALUEINFORMATION_H

@class NSDate, NSString, NSNumber;

#import <Foundation/Foundation.h>


@interface WBSPerSitePreferenceValueInformation : NSObject

@property (readonly, nonatomic) NSDate *creationDate; // ivar: _creationDate
@property (readonly, copy, nonatomic) NSString *domain; // ivar: _domain
@property (readonly, nonatomic) NSNumber *value; // ivar: _value


-(id)initWithDomain:(id)arg0 value:(id)arg1 creationDate:(id)arg2 ;


@end


#endif
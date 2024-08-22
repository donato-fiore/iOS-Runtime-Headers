// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AFSIRITASKUSAGERESULT_H
#define AFSIRITASKUSAGERESULT_H

@class NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface AFSiriTaskUsageResult : NSObject <NSSecureCoding>

 {
    NSString *_originatingAceID;
}




+(BOOL)supportsSecureCoding;
-(id)_initWithOriginatingAceID:(id)arg0 ;
-(id)_originatingAceID;
-(id)_resultDescription;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif
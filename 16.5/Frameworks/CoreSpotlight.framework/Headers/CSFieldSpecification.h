// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CSFIELDSPECIFICATION_H
#define CSFIELDSPECIFICATION_H

@class NSString;

#import <Foundation/Foundation.h>


@interface CSFieldSpecification : NSObject {
    NSString *_displayName;
    NSString *_attribute;
    NSString *_status;
    NSString *_token;
}


@property (readonly, nonatomic) NSString *attribute;
@property (readonly, nonatomic) NSString *displayName;
@property (readonly, nonatomic) NSString *status;
@property (readonly, nonatomic) NSString *token;


-(id)dictionaryFormat;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDisplayName:(id)arg0 attribute:(id)arg1 status:(id)arg2 token:(id)arg3 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif
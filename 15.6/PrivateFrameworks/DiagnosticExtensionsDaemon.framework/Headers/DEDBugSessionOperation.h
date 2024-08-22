// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DEDBUGSESSIONOPERATION_H
#define DEDBUGSESSIONOPERATION_H

@class NSString, NSDictionary;
@protocol NSSecureCoding, DEDSecureArchiving;

#import <Foundation/Foundation.h>


@interface DEDBugSessionOperation : NSObject <NSSecureCoding, DEDSecureArchiving>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain) NSString *identifier; // ivar: _identifier
@property (retain) NSDictionary *options; // ivar: _options
@property (readonly) Class superclass;
@property NSInteger type; // ivar: _type


+(BOOL)supportsSecureCoding;
+(id)archivedClasses;
+(id)hashingKeyWithId:(id)arg0 type:(NSInteger)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif
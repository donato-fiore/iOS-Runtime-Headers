// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SFCOMMANDVALUE_H
#define SFCOMMANDVALUE_H

@class NSString, NSDictionary, NSData;
@protocol SFCommandValue, NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "SFReferentialCommand.h"

@interface SFCommandValue : NSObject <SFCommandValue, NSSecureCoding, NSCopying>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSData *jsonData;
@property (retain, nonatomic) SFReferentialCommand *referentialCommand; // ivar: _referentialCommand
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithProtobuf:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ARXPCDICTIONARYWRAPPER_H
#define ARXPCDICTIONARYWRAPPER_H

@protocol NSSecureCoding, OS_xpc_object;

#import <Foundation/Foundation.h>


@interface ARXPCDictionaryWrapper : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSObject<OS_xpc_object> *dictionary; // ivar: _dictionary


+(BOOL)supportsSecureCoding;
+(id)wrapperWithDictionary:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif
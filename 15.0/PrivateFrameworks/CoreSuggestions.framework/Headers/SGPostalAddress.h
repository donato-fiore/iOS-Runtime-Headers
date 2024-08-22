// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SGPOSTALADDRESS_H
#define SGPOSTALADDRESS_H

@class NSString;


#import "SGLabeledObject.h"
#import "SGPostalAddressComponents.h"

@interface SGPostalAddress : SGLabeledObject {
    NSString *_cachedAddress;
    _opaque_pthread_mutex_t _cachedAddressLock;
}


@property (readonly, nonatomic) NSString *address;
@property (readonly, nonatomic) SGPostalAddressComponents *components; // ivar: _components
@property (readonly, nonatomic) NSString *rawAddress; // ivar: _rawAddress


+(BOOL)supportsSecureCoding;
+(id)postalAddress:(id)arg0 components:(id)arg1 label:(id)arg2 extractionInfo:(id)arg3 recordId:(id)arg4 ;
+(id)postalAddress:(id)arg0 components:(id)arg1 label:(id)arg2 extractionType:(NSUInteger)arg3 recordId:(id)arg4 ;
+(id)postalAddress:(id)arg0 components:(id)arg1 label:(id)arg2 extractionType:(NSUInteger)arg3 recordId:(id)arg4 origin:(id)arg5 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToPostalAddress:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithAddress:(id)arg0 components:(id)arg1 label:(id)arg2 extractionInfo:(id)arg3 recordId:(id)arg4 ;
-(id)initWithCoder:(id)arg0 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif
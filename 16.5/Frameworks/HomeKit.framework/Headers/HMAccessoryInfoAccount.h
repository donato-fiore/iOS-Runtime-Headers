// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMACCESSORYINFOACCOUNT_H
#define HMACCESSORYINFOACCOUNT_H

@class NSString;

#import <Foundation/Foundation.h>


@interface HMAccessoryInfoAccount : NSObject

@property (readonly, copy) NSString *aaAltDSID; // ivar: _aaAltDSID
@property (readonly, copy) NSString *amsAltDSID; // ivar: _amsAltDSID
@property (readonly) BOOL signedIn; // ivar: _signedIn
@property (readonly, copy) NSString *username; // ivar: _username


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithProtoData:(id)arg0 ;
-(id)initWithProtoPayload:(id)arg0 ;
-(id)initWithUsername:(id)arg0 aaAltDSID:(id)arg1 amsAltDSID:(id)arg2 signedIn:(BOOL)arg3 ;
-(id)protoData;
-(id)protoPayload;


@end


#endif
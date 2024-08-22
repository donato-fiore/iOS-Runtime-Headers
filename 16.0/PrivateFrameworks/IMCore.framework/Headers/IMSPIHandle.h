// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IMSPIHANDLE_H
#define IMSPIHANDLE_H

@class NSString;

#import <Foundation/Foundation.h>

#import "IMHandle.h"

@interface IMSPIHandle : NSObject {
    IMHandle *_imHandle;
    BOOL _haveFetchedIMHandle;
}


@property (retain) NSString *address; // ivar: _address
@property (readonly) NSString *businessName;
@property (readonly) NSString *cnContactID;
@property (retain) NSString *countryCode; // ivar: _countryCode
@property (readonly) NSString *displayName;
@property (readonly) BOOL isBusiness;
@property BOOL isMe; // ivar: _isMe


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)handle;
-(id)initWithAddress:(id)arg0 countryCode:(id)arg1 isMe:(BOOL)arg2 ;


@end


#endif
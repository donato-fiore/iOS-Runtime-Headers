// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BCSAPPCLIPCODEPAYLOAD_H
#define BCSAPPCLIPCODEPAYLOAD_H

@class NSData, NSString;
@protocol BCSCodePayload;

#import <Foundation/Foundation.h>


@interface BCSAppclipCodePayload : NSObject <BCSCodePayload>

 {
    NSData *_payload;
    NSUInteger _version;
}


@property (readonly, nonatomic) NSInteger codeType;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithData:(id)arg0 version:(NSUInteger)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)savePayloadInUserActivity:(id)arg0 ;


@end


#endif
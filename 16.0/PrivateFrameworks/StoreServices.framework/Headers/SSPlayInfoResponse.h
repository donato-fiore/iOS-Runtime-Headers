// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SSPLAYINFORESPONSE_H
#define SSPLAYINFORESPONSE_H

@class NSString, NSError, NSData;
@protocol SSXPCCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface SSPlayInfoResponse : NSObject <SSXPCCoding, NSCopying>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSError *error; // ivar: _error
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSData *playInfoData; // ivar: _playInfoData
@property (readonly) Class superclass;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)copyXPCEncoding;
-(id)initWithPlayInfoData:(id)arg0 error:(id)arg1 ;
-(id)initWithXPCEncoding:(id)arg0 ;
-(void)dealloc;


@end


#endif
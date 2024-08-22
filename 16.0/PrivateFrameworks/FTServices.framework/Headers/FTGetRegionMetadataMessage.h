// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FTGETREGIONMETADATAMESSAGE_H
#define FTGETREGIONMETADATAMESSAGE_H

@class IDSBaseMessage, NSString, NSDictionary;
@protocol NSCopying;



@interface FTGetRegionMetadataMessage : IDSBaseMessage <NSCopying>



@property (copy) NSString *language; // ivar: _language
@property (copy) NSDictionary *responseRegionInformation; // ivar: _responseRegionInformation


-(BOOL)wantsBagKey;
-(BOOL)wantsBinaryPush;
-(BOOL)wantsCompressedBody;
-(BOOL)wantsHTTPGet;
-(BOOL)wantsHTTPHeaders;
-(NSInteger)command;
-(NSInteger)responseCommand;
-(id)bagKey;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)messageBody;
-(id)requiredKeys;
-(void)handleResponseDictionary:(id)arg0 ;


@end


#endif
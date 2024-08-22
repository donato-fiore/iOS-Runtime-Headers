// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MFMUTABLEMESSAGEHEADERS_H
#define MFMUTABLEMESSAGEHEADERS_H

@class NSMutableDictionary, NSMutableArray, NSString;
@protocol ECMutableMessageHeaders;


#import "MFMessageHeaders.h"

@interface MFMutableMessageHeaders : MFMessageHeaders <ECMutableMessageHeaders>

 {
    NSMutableDictionary *_headersAdded;
    NSMutableArray *_headersRemoved;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)hasHeaderForKey:(id)arg0 ;
-(id)_copyHeaderValueForKey:(id)arg0 ;
-(id)_copyHeaderValueForKey:(id)arg0 offset:(*NSUInteger)arg1 decoded:(BOOL)arg2 ;
-(id)allHeaderKeys;
-(id)encodedHeaders;
-(id)firstHeaderForKey:(id)arg0 ;
-(id)headersDictionary;
-(id)mutableCopy;
-(void)_appendAddedHeaderKey:(id)arg0 value:(id)arg1 toData:(id)arg2 ;
-(void)_appendHeaderKey:(id)arg0 value:(id)arg1 toData:(id)arg2 ;
-(void)removeHeaderForKey:(id)arg0 ;
-(void)setAddressList:(id)arg0 forKey:(id)arg1 ;
-(void)setAddressListForBcc:(id)arg0 ;
-(void)setAddressListForCc:(id)arg0 ;
-(void)setAddressListForReplyTo:(id)arg0 ;
-(void)setAddressListForSender:(id)arg0 ;
-(void)setAddressListForTo:(id)arg0 ;
-(void)setHeader:(id)arg0 forKey:(id)arg1 ;
-(void)setReferences:(id)arg0 ;
-(void)stripInternalHeaders;


@end


#endif
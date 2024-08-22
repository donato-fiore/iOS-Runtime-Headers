// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GEOCONFIGSTORAGEGETVALUEFORKEYREPLY_H
#define GEOCONFIGSTORAGEGETVALUEFORKEYREPLY_H

@class NSString;
@protocol GEOXPCReply;


#import "GEOXPCReply.h"

@interface GEOConfigStorageGetValueForKeyReply : GEOXPCReply <GEOXPCReply>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSInteger keySource; // ivar: _keySource
@property (retain, nonatomic) id *keyValue; // ivar: _keyValue
@property (readonly) Class superclass;


-(BOOL)isValid;
-(id)initWithXPCDictionary:(id)arg0 error:(*id)arg1 ;
-(void)encodeToXPCDictionary:(id)arg0 ;


@end


#endif
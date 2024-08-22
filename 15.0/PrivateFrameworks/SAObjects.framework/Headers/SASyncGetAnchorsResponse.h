// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SASYNCGETANCHORSRESPONSE_H
#define SASYNCGETANCHORSRESPONSE_H

@class NSString, NSArray;
@protocol SAServerBoundCommand;


#import "SABaseClientBoundCommand.h"

@interface SASyncGetAnchorsResponse : SABaseClientBoundCommand <SAServerBoundCommand>



@property (copy, nonatomic) NSString *aceId;
@property (copy, nonatomic) NSArray *anchors;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *refId;
@property (readonly) Class superclass;


+(id)getAnchorsResponse;
+(id)getAnchorsResponseWithDictionary:(id)arg0 context:(id)arg1 ;
-(BOOL)mutatingCommand;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif
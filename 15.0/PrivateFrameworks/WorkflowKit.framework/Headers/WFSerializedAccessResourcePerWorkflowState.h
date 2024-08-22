// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFSERIALIZEDACCESSRESOURCEPERWORKFLOWSTATE_H
#define WFSERIALIZEDACCESSRESOURCEPERWORKFLOWSTATE_H

@class NSData, NSDictionary, NSString;

#import <Foundation/Foundation.h>


@interface WFSerializedAccessResourcePerWorkflowState : NSObject

@property (readonly, nonatomic) NSData *data; // ivar: _data
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly, nonatomic) NSString *identifier; // ivar: _identifier


-(BOOL)isEqual:(id)arg0 ;
-(NSInteger)compare:(id)arg0 ;
-(NSUInteger)hash;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 data:(id)arg1 ;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VCINTENTDEFINITIONCHANGE_H
#define VCINTENTDEFINITIONCHANGE_H

@class NSString, NSArray;
@protocol VCSYChange;

#import <Foundation/Foundation.h>


@interface VCIntentDefinitionChange : NSObject <VCSYChange>



@property (nonatomic) NSInteger changeType; // ivar: _changeType
@property (readonly, copy, nonatomic) NSString *checksum; // ivar: _checksum
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSArray *files; // ivar: _files
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *objectIdentifier; // ivar: _objectIdentifier
@property (readonly, nonatomic) NSString *sequencer;
@property (readonly) Class superclass;


+(int)messageType;
-(BOOL)readFrom:(id)arg0 error:(*id)arg1 ;
-(BOOL)writeTo:(id)arg0 error:(*id)arg1 ;
-(id)initWithApplicationRecord:(id)arg0 changeType:(NSInteger)arg1 ;
-(id)initWithObjectIdentifier:(id)arg0 changeType:(NSInteger)arg1 ;


@end


#endif
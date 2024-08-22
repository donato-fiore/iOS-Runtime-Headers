// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WBWINDOWCHANGE_H
#define WBWINDOWCHANGE_H

@class NSString, NSDictionary;
@protocol WBChange;

#import <Foundation/Foundation.h>

#import "WBWindowState.h"

@interface WBWindowChange : NSObject <WBChange>



@property (readonly, nonatomic) NSInteger changeType; // ivar: _changeType
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSInteger objectType;
@property (readonly, nonatomic) BOOL shouldSync;
@property (readonly, nonatomic) WBWindowState *state; // ivar: _state
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
+(id)addChangeWithState:(id)arg0 ;
+(id)deleteChangeWithState:(id)arg0 ;
+(id)modifyChangeWithState:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionaryRepresentation:(id)arg0 ;
-(id)initWithState:(id)arg0 changeType:(NSInteger)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)updateChangeAfterUpdatingInMemoryID:(int)arg0 withDatabaseID:(int)arg1 ;


@end


#endif
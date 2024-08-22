// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CLSARCHIVEDHANDOUT_H
#define CLSARCHIVEDHANDOUT_H

@class NSArray, NSString;
@protocol CLSRelationable;


#import "CLSAbstractHandout.h"

@interface CLSArchivedHandout : CLSAbstractHandout <CLSRelationable>



@property (readonly, nonatomic) NSArray *attachments;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
+(id)relations;
-(id)_init;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif
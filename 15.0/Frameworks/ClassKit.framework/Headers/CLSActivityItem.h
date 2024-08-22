// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CLSACTIVITYITEM_H
#define CLSACTIVITYITEM_H

@class NSString;
@protocol CLSRelationable;


#import "CLSObject.h"

@interface CLSActivityItem : CLSObject <CLSRelationable>

 {
    NSString *_title;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *title;


+(BOOL)supportsSecureCoding;
+(id)relations;
-(BOOL)validateObject:(*id)arg0 ;
-(id)_init;
-(id)dictionaryRepresentation;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 title:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif
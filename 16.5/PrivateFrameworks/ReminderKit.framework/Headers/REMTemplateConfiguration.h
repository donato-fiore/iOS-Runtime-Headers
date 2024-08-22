// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef REMTEMPLATECONFIGURATION_H
#define REMTEMPLATECONFIGURATION_H

@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "REMObjectID.h"

@interface REMTemplateConfiguration : NSObject <NSCopying, NSSecureCoding>



@property (readonly, nonatomic) BOOL shouldSaveCompleted; // ivar: _shouldSaveCompleted
@property (readonly, nonatomic) REMObjectID *sourceListID; // ivar: _sourceListID


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSourceListID:(id)arg0 shouldSaveCompleted:(BOOL)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif
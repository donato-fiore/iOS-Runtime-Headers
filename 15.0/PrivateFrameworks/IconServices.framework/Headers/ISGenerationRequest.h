// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ISGENERATIONREQUEST_H
#define ISGENERATIONREQUEST_H

@class NSUUID;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "ISConcreteIcon.h"
#import "ISImageDescriptor.h"

@interface ISGenerationRequest : NSObject <NSSecureCoding>



@property (retain) ISConcreteIcon *icon; // ivar: _icon
@property (retain) ISImageDescriptor *imageDescriptor; // ivar: _imageDescriptor
@property NSUInteger lsDatabaseSequenceNumber; // ivar: _lsDatabaseSequenceNumber
@property (retain) NSUUID *lsDatabaseUUID; // ivar: _lsDatabaseUUID


+(BOOL)supportsSecureCoding;
-(id)_decorationRecipeKeyFromType:(id)arg0 ;
-(id)generateImage;
-(id)generateImageReturningRecordIdentifiers:(*id)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif
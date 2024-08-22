// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKFETCHARCHIVEDRECORDSOPTIONS_H
#define CKFETCHARCHIVEDRECORDSOPTIONS_H

@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "CKServerChangeToken.h"

@interface CKFetchArchivedRecordsOptions : NSObject <NSSecureCoding, NSCopying>



@property (copy, nonatomic) CKServerChangeToken *previousServerChangeToken; // ivar: _previousServerChangeToken


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif
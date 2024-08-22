// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DMFINSTALLMANAGEDBOOKRESULTOBJECT_H
#define DMFINSTALLMANAGEDBOOKRESULTOBJECT_H

@class CATTaskResultObject;


#import "DMFBook.h"

@interface DMFInstallManagedBookResultObject : CATTaskResultObject

@property (readonly, copy, nonatomic) DMFBook *book; // ivar: _book


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithBook:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif
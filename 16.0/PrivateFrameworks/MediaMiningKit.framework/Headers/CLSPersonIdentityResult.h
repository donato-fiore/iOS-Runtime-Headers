// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CLSPERSONIDENTITYRESULT_H
#define CLSPERSONIDENTITYRESULT_H


#import <Foundation/Foundation.h>

#import "CLSPersonIdentity.h"

@interface CLSPersonIdentityResult : NSObject

@property (nonatomic) float confidence; // ivar: _confidence
@property (retain, nonatomic) CLSPersonIdentity *person; // ivar: _person


+(id)personResultWithPerson:(id)arg0 andConfidence:(float)arg1 ;
-(BOOL)isSamePersonAsResult:(id)arg0 ;
-(id)description;
-(void)mergeWithResult:(id)arg0 ;


@end


#endif
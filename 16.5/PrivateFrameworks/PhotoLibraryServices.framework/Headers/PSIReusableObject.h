// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PSIREUSABLEOBJECT_H
#define PSIREUSABLEOBJECT_H


#import <Foundation/Foundation.h>


@interface PSIReusableObject : NSObject {
    BOOL _isPreparedForReuse;
    BOOL _isPreparingFromStatement;
}


@property (readonly, nonatomic) BOOL isPreparedFromStatement; // ivar: _isPreparedFromStatement


-(id)init;
-(void)didPrepareFromStatement:(struct sqlite3_stmt *)arg0 ;
-(void)prepareForReuse;
-(void)prepareFromStatement:(struct sqlite3_stmt *)arg0 ;


@end


#endif
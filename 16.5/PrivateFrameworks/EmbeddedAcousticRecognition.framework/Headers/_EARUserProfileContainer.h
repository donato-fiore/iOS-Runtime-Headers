// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _EARUSERPROFILECONTAINER_H
#define _EARUSERPROFILECONTAINER_H

@class NSData, NSString;

#import <Foundation/Foundation.h>


@interface _EARUserProfileContainer : NSObject {
    shared_ptr<std::ifstream> _fstream;
    mutex _mutex;
    ? _lmeData;
}


@property (readonly, copy, nonatomic) NSData *data;
@property (readonly, copy, nonatomic) NSString *userId;


+(void)initialize;
-(id)initWithPath:(id)arg0 error:(*id)arg1 ;
-(id)initWithPath:(id)arg0 userId:(id)arg1 recognitionOnly:(BOOL)arg2 error:(*id)arg3 ;
-(id)maskedUserIdWithMask:(id)arg0 ;
-(struct shared_ptr<const quasar::LmeData> )lmeData;
-(struct shared_ptr<quasar::LmeContainer> )quasarContainerWithUserIdMask:(id)arg0 ;


@end


#endif
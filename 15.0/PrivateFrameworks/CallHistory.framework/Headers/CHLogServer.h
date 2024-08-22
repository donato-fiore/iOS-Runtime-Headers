// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CHLOGSERVER_H
#define CHLOGSERVER_H



#import "CHSynchronizable.h"

@interface CHLogServer : CHSynchronizable {
    unordered_map<const char *, os_log_s *, std::hash<const char *>, std::equal_to<const char *>, std::allocator<std::pair<const char *const, os_log_s *>>> fLogHandles;
}




+(id)instance;
-(id)init;
-(struct os_log_s *)logHandleForDomain:(char *)arg0 ;
-(struct os_log_s *)logHandleForDomainSync:(char *)arg0 ;
-(void)createLogHandleForDomainSync:(char *)arg0 ;


@end


#endif
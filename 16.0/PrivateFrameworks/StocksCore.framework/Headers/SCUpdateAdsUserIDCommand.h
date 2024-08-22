// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SCUPDATEADSUSERIDCOMMAND_H
#define SCUPDATEADSUSERIDCOMMAND_H


#import <Foundation/Foundation.h>


@interface SCUpdateAdsUserIDCommand : NSObject {
    ? userID;
    ? userIDCreatedDate;
    ? overwrite;
}




+(BOOL)supportsSecureCoding;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif
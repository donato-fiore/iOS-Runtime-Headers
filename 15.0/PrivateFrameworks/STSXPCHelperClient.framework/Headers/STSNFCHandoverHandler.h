// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef STSNFCHANDOVERHANDLER_H
#define STSNFCHANDOVERHANDLER_H

@class NSMutableData, NSData;

#import <Foundation/Foundation.h>


@interface STSNFCHandoverHandler : NSObject {
    NSMutableData *_apduBuffer;
    NSData *_responseBuffer;
    NSUInteger _readIndex;
}




-(id)init;


@end


#endif
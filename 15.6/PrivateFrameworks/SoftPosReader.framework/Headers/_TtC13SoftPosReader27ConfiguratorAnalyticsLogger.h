// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TTC13SOFTPOSREADER27CONFIGURATORANALYTICSLOGGER_H
#define _TTC13SOFTPOSREADER27CONFIGURATORANALYTICSLOGGER_H

@class TtC13SoftPosReader8CALogger;



@interface _TtC13SoftPosReader27ConfiguratorAnalyticsLogger : TtC13SoftPosReader8CALogger {
    ? configureReaderFetchEvent;
    ? configureReaderLoadEvent;
    ? configureReaderStatusEvent;
    ? payloadCertRenewEvent;
    ? configureReaderFetchEventFetchTime;
    ? configureReaderFetchEventFetchStatus;
    ? configureReaderFetchEventKernelSLAMSize;
    ? configureReaderFetchEventProfileSLAMSize;
    ? configureReaderFetchEventGlobalSLAMSize;
    ? configureReaderFetchEventServerErrorCode;
    ? configureReaderFetchEventErrorCode;
    ? configureReaderLoadEventGlobalID;
    ? configureReaderLoadEventProfileID;
    ? configureReaderLoadEventAppletVersion;
    ? configureReaderLoadEventKernelLoadTime;
    ? configureReaderLoadEventGlobalLoadTime;
    ? configureReaderLoadEventProfileLoadTime;
    ? configureReaderLoadEventKernelLoadStatus;
    ? configureReaderLoadEventGlobalLoadStatus;
    ? configureReaderLoadEventProfileLoadStatus;
    ? configureReaderLoadEventLoadedProfileNumber;
    ? configureReaderLoadEventLoadedProfile;
    ? configureReaderLoadEventProfileSwitchTime;
    ? configureReaderLoadEventErrorCode;
    ? loadStatusSuccess;
    ? loadStatusFail;
    ? loadStatusSkip;
    ? configureReaderStatusEventKernelNeeded;
    ? configureReaderStatusEventKernelUpdateNeeded;
    ? configureReaderStatusEventProfileNeeded;
    ? payloadCertRenewEventRequestTime;
    ? payloadCertRenewEventRequestStatus;
    ? payloadCertRenewEventsuccess;
    ? payloadCertRenewEventnetworkError;
    ? payloadCertRenewEventcertValidityError;
}






@end


#endif